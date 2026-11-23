#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RFShard; }
namespace RayFire { class RayfireConnectivity; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RAYFIRE_RFSTRESS_CHECKSUPPORT_OFFSET UNITYSDK_OFFSET(0x29C3350)
#define RAYFIRE_RFSTRESS_GETPATHASTAR_OFFSET UNITYSDK_OFFSET(0x29C3600)
#define RAYFIRE_RFSTRESS_INITIALIZENEED_OFFSET UNITYSDK_OFFSET(0x29C4130)
#define RAYFIRE_RFSTRESS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x29C4420)
#define RAYFIRE_RFSTRESS_PREPARECHECKSHARDS_OFFSET UNITYSDK_OFFSET(0x29C44A0)
#define RAYFIRE_RFSTRESS_REMNEIBBYSTRESS_OFFSET UNITYSDK_OFFSET(0x29C4560)
#define RAYFIRE_RFSTRESS_SETSIZEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x29C4860)
#define RAYFIRE_RFSTRESS_SETSTRESSCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x29C5000)
#define RAYFIRE_RFSTRESS_SETSTRESSSUPPORT_OFFSET UNITYSDK_OFFSET(0x29C5830)
#define RAYFIRE_RFSTRESS_STARTSTRESS_OFFSET UNITYSDK_OFFSET(0x29C5F30)
#define RAYFIRE_RFSTRESS_STRESSCOLLAPSE_OFFSET UNITYSDK_OFFSET(0x29C6030)
#define RAYFIRE_RFSTRESS_STRESSCOR_OFFSET UNITYSDK_OFFSET(0x29C6070)
#define RAYFIRE_RFSTRESS_STRESSEROSION_OFFSET UNITYSDK_OFFSET(0x29C6100)
#define RAYFIRE_RFSTRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x29C66D0)

namespace RayFire
{
	inline static constexpr unsigned int RFStress_TypeDefinitionIndex = 15699;

	class RFStress : public ::System::Object
	{
	public:
		::System::Boolean enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 threshold; // 0x14
		::System::Single erosion; // 0x18
		::System::Single interval; // 0x1C
		::System::Int32 support; // 0x20
		::System::Boolean exposed; // 0x24
		::System::Boolean bySize; // 0x25
		::System::Boolean inProgress; // 0x26
		::System::Byte _padding1[0x1];
		::System::Int32 strAmount; // 0x28
		::System::Int32 supAmount; // 0x2C
		::System::Collections::Generic::List_1<::RayFire::RFShard*>* strShards; // 0x30
		::System::Collections::Generic::List_1<::RayFire::RFShard*>* supShards; // 0x38
		::UnityEngine::Vector3 rotCache; // 0x40
		::UnityEngine::Vector3 grvCache; // 0x4C
		::System::Int32 supCache; // 0x58
		::System::Single sizeCache; // 0x5C
		::System::Boolean initialized; // 0x60
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::List_1<::RayFire::RFShard*>* checkShards; // 0x68
		::System::Collections::Generic::List_1<::System::Int32>* path; // 0x70
		::System::Collections::Generic::List_1<::System::Int32>* frontier; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* frontPrior; // 0x80

		static ::System::Boolean InitializeNeed(::RayFire::RayfireConnectivity* A37838EDFFA3D6AD)
		{
			return ((::System::Boolean(*)(::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_INITIALIZENEED_OFFSET))(A37838EDFFA3D6AD);
		}

		static ::System::Void SetStressSupport(::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD, ::RayFire::RFStress* A879A37DF24E1433)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::RayFire::RFStress*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_SETSTRESSSUPPORT_OFFSET))(BB1C78C5B2F8C7AD, A879A37DF24E1433);
		}

		static ::System::Int32 RemNeibByStress(::RayFire::RFStress* A879A37DF24E1433, ::System::Int32 B98D8032C907B76F)
		{
			return ((::System::Int32(*)(::RayFire::RFStress*, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_REMNEIBBYSTRESS_OFFSET))(A879A37DF24E1433, B98D8032C907B76F);
		}

		static ::System::Void Initialize(::RayFire::RayfireConnectivity* A37838EDFFA3D6AD)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_INITIALIZE_OFFSET))(A37838EDFFA3D6AD);
		}

		static ::System::Void SetSizeMultiplier(::RayFire::RayfireConnectivity* A37838EDFFA3D6AD)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_SETSIZEMULTIPLIER_OFFSET))(A37838EDFFA3D6AD);
		}

		static ::System::Void StressErosion(::RayFire::RayfireConnectivity* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_STRESSEROSION_OFFSET))(F2C7FF5A19F78852);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckSupport(::RayFire::RayfireConnectivity* F2C7FF5A19F78852)
		{
			return ((::System::Boolean(*)(::PVOID, ::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_CHECKSUPPORT_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Void StartStress(::RayFire::RayfireConnectivity* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_STARTSTRESS_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void StressCollapse(::RayFire::RayfireConnectivity* B4EF92D0FD50125B, ::System::Int32 B0D5589FE11D50D4)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_STRESSCOLLAPSE_OFFSET))(B4EF92D0FD50125B, B0D5589FE11D50D4);
		}

		::System::Collections::IEnumerator* StressCor(::RayFire::RayfireConnectivity* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_STRESSCOR_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Void SetStressConnections(::RayFire::RayfireConnectivity* A37838EDFFA3D6AD)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_SETSTRESSCONNECTIONS_OFFSET))(A37838EDFFA3D6AD);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetPathAstar(::RayFire::RFStress* BB83557721B5F386, ::System::Collections::Generic::List_1<::RayFire::RFShard*>* BB1C78C5B2F8C7AD, ::System::Int32 AA127A25908BA875, ::System::Int32 AABEECA2C578F3BB)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::RayFire::RFStress*, ::System::Collections::Generic::List_1<::RayFire::RFShard*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_GETPATHASTAR_OFFSET))(BB83557721B5F386, BB1C78C5B2F8C7AD, AA127A25908BA875, AABEECA2C578F3BB);
		}

		static ::System::Void PrepareCheckShards(::RayFire::RFStress* A879A37DF24E1433)
		{
			return ((::System::Void(*)(::RayFire::RFStress*))((::PBYTE)hIl2Cpp + RAYFIRE_RFSTRESS_PREPARECHECKSHARDS_OFFSET))(A879A37DF24E1433);
		}
	};
}
