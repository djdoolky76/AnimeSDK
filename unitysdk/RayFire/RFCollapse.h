#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RayFire/RFCollapse_B7FFFA6D68772462.h"
#include "unitysdk/System/Object.h"

namespace RayFire { class RFCluster; }
namespace RayFire { class RayfireConnectivity; }
namespace System::Collections { class IEnumerator; }

#define RAYFIRE_RFCOLLAPSE_AREACOLLAPSE_1_OFFSET UNITYSDK_OFFSET(0x2954420)
#define RAYFIRE_RFCOLLAPSE_AREACOLLAPSE_OFFSET UNITYSDK_OFFSET(0x2954370)
#define RAYFIRE_RFCOLLAPSE_COLLAPSECOR_OFFSET UNITYSDK_OFFSET(0x2954470)
#define RAYFIRE_RFCOLLAPSE_RANDOMCOLLAPSE_OFFSET UNITYSDK_OFFSET(0x2954500)
#define RAYFIRE_RFCOLLAPSE_REMNEIBBYAREA_OFFSET UNITYSDK_OFFSET(0x2954580)
#define RAYFIRE_RFCOLLAPSE_REMNEIBBYSIZE_OFFSET UNITYSDK_OFFSET(0x2954880)
#define RAYFIRE_RFCOLLAPSE_REMNEIBRANDOM_OFFSET UNITYSDK_OFFSET(0x2954B50)
#define RAYFIRE_RFCOLLAPSE_SETRANGEDATA_OFFSET UNITYSDK_OFFSET(0x2954EA0)
#define RAYFIRE_RFCOLLAPSE_SIZECOLLAPSE_1_OFFSET UNITYSDK_OFFSET(0x29551E0)
#define RAYFIRE_RFCOLLAPSE_SIZECOLLAPSE_OFFSET UNITYSDK_OFFSET(0x2955230)
#define RAYFIRE_RFCOLLAPSE_STARTCOLLAPSE_OFFSET UNITYSDK_OFFSET(0x29552E0)
#define RAYFIRE_RFCOLLAPSE__CTOR_OFFSET UNITYSDK_OFFSET(0x29553E0)

namespace RayFire
{
	inline static constexpr unsigned int RFCollapse_TypeDefinitionIndex = 15452;

	class RFCollapse : public ::System::Object
	{
	public:
		::RayFire::RFCollapse_B7FFFA6D68772462 type; // 0x10
		::System::Int32 start; // 0x14
		::System::Int32 end; // 0x18
		::System::Int32 steps; // 0x1C
		::System::Single duration; // 0x20
		::System::Boolean inProgress; // 0x24

		static ::System::Void AreaCollapse(::RayFire::RayfireConnectivity* B4EF92D0FD50125B, ::System::Int32 E4603D1492C60724)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_AREACOLLAPSE_OFFSET))(B4EF92D0FD50125B, E4603D1492C60724);
		}

		static ::System::Int32 RemNeibByArea(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::System::Single E2663FD988F995F0)
		{
			return ((::System::Int32(*)(::RayFire::RFCluster*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_REMNEIBBYAREA_OFFSET))(BE27CDF41D2DFAAD, E2663FD988F995F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE__CTOR_OFFSET))(this);
		}

		static ::System::Int32 RemNeibRandom(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::System::Int32 E11AF987C81C7047, ::System::Int32 AF9A63638B456161)
		{
			return ((::System::Int32(*)(::RayFire::RFCluster*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_REMNEIBRANDOM_OFFSET))(BE27CDF41D2DFAAD, E11AF987C81C7047, AF9A63638B456161);
		}

		static ::System::Int32 RemNeibBySize(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::System::Single A70F1BE5E1251A4A)
		{
			return ((::System::Int32(*)(::RayFire::RFCluster*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_REMNEIBBYSIZE_OFFSET))(BE27CDF41D2DFAAD, A70F1BE5E1251A4A);
		}

		static ::System::Void SizeCollapse(::RayFire::RayfireConnectivity* B4EF92D0FD50125B, ::System::Int32 A62B65BCF78F73A8)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_SIZECOLLAPSE_OFFSET))(B4EF92D0FD50125B, A62B65BCF78F73A8);
		}

		static ::System::Void SizeCollapse_1(::RayFire::RayfireConnectivity* B4EF92D0FD50125B, ::System::Single EBE1ECC4DB21F572)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_SIZECOLLAPSE_1_OFFSET))(B4EF92D0FD50125B, EBE1ECC4DB21F572);
		}

		static ::System::Void AreaCollapse_1(::RayFire::RayfireConnectivity* B4EF92D0FD50125B, ::System::Single B77BBAD844C6C3E8)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*, ::System::Single))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_AREACOLLAPSE_1_OFFSET))(B4EF92D0FD50125B, B77BBAD844C6C3E8);
		}

		::System::Collections::IEnumerator* CollapseCor(::RayFire::RayfireConnectivity* F2C7FF5A19F78852)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_COLLAPSECOR_OFFSET))(this, F2C7FF5A19F78852);
		}

		static ::System::Void RandomCollapse(::RayFire::RayfireConnectivity* B4EF92D0FD50125B, ::System::Int32 EA86ED294003772E, ::System::Int32 F12772AACDEC1012)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_RANDOMCOLLAPSE_OFFSET))(B4EF92D0FD50125B, EA86ED294003772E, F12772AACDEC1012);
		}

		static ::System::Void StartCollapse(::RayFire::RayfireConnectivity* F2C7FF5A19F78852)
		{
			return ((::System::Void(*)(::RayFire::RayfireConnectivity*))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_STARTCOLLAPSE_OFFSET))(F2C7FF5A19F78852);
		}

		static ::System::Void SetRangeData(::RayFire::RFCluster* BE27CDF41D2DFAAD, ::System::Int32 AF4A9DC5E5FCE29D, ::System::Int32 AF9A63638B456161)
		{
			return ((::System::Void(*)(::RayFire::RFCluster*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RAYFIRE_RFCOLLAPSE_SETRANGEDATA_OFFSET))(BE27CDF41D2DFAAD, AF4A9DC5E5FCE29D, AF9A63638B456161);
		}
	};
}
