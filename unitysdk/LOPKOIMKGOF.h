#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LOPKOIMKGOF_BELPNMDCFEM;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOPKOIMKGOF_ALLCPAFCOLI_OFFSET UNITYSDK_OFFSET(0x1A5C23F0)
#define LOPKOIMKGOF_CLNPFDLLDBH_OFFSET UNITYSDK_OFFSET(0x1A5C2AB0)
#define LOPKOIMKGOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C30D0)
#define LOPKOIMKGOF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5C14A0)
#define LOPKOIMKGOF_HIAFMADCMFO_OFFSET UNITYSDK_OFFSET(0x1A5C2520)
#define LOPKOIMKGOF_IBGHDEFBLKG_OFFSET UNITYSDK_OFFSET(0x1A5C2720)
#define LOPKOIMKGOF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1A5C15A0)
#define LOPKOIMKGOF_JPFLCMFBLDM_OFFSET UNITYSDK_OFFSET(0x1A5C3090)
#define LOPKOIMKGOF_KNCAEOGPAIA_OFFSET UNITYSDK_OFFSET(0x1A5C27D0)
#define LOPKOIMKGOF_LDEPCHKJGCA_OFFSET UNITYSDK_OFFSET(0x1A5C2C30)
#define LOPKOIMKGOF_LLANCOOEKKJ_OFFSET UNITYSDK_OFFSET(0x1A5C2570)
#define LOPKOIMKGOF_PEFCAOFOGIO_OFFSET UNITYSDK_OFFSET(0x1A5C25F0)
#define LOPKOIMKGOF_PNMGHOBKFMN_OFFSET UNITYSDK_OFFSET(0x1A5C2F10)
#define LOPKOIMKGOF_POJBDKANIHE_OFFSET UNITYSDK_OFFSET(0x1A5C2430)

inline static constexpr unsigned int LOPKOIMKGOF_TypeDefinitionIndex = 81521;

	class LOPKOIMKGOF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*>* LELCKNAIGAP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* OCFGGPCIPLL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>*>* CNNEDDJLHHF; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* LBMEHBKMAIL; // 0x28
		::System::Int32 OLLCNEODNDE; // 0x30
		static ::System::Boolean* StaticGet_EMIOBNKHPEH()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LOPKOIMKGOF")->GetStaticField(0x15B40);
		}

		static ::UnityEngine::Vector3* StaticGet_AAFKKGHFMAA()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "LOPKOIMKGOF")->GetStaticField(0x15B44);
		}

		static ::UnityEngine::Vector3* StaticGet_AIINOKOMLMD()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("", "LOPKOIMKGOF")->GetStaticField(0x15B50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Boolean ALLCPAFCOLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_ALLCPAFCOLI_OFFSET))(this);
		}

		::System::Int32 POJBDKANIHE(::System::Action* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_POJBDKANIHE_OFFSET))(this, a1);
		}

		::System::Void LLANCOOEKKJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_LLANCOOEKKJ_OFFSET))(this, a1);
		}

		::System::Int32 PEFCAOFOGIO(::LOPKOIMKGOF_BELPNMDCFEM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::LOPKOIMKGOF_BELPNMDCFEM*))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_PEFCAOFOGIO_OFFSET))(this, a1);
		}

		::System::Void IBGHDEFBLKG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_IBGHDEFBLKG_OFFSET))(this, a1);
		}

		::System::Int32 KNCAEOGPAIA(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_KNCAEOGPAIA_OFFSET))(this, a1, a2);
		}

		::System::Void CLNPFDLLDBH(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_CLNPFDLLDBH_OFFSET))(this, a1, a2);
		}

		::System::Int32 LDEPCHKJGCA(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_LDEPCHKJGCA_OFFSET))(this, a1, a2);
		}

		::System::Void PNMGHOBKFMN(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_PNMGHOBKFMN_OFFSET))(this, a1, a2);
		}

		::System::Int32 HIAFMADCMFO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_HIAFMADCMFO_OFFSET))(this);
		}

		::System::Void JPFLCMFBLDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOPKOIMKGOF_JPFLCMFBLDM_OFFSET))(this);
		}

	};
