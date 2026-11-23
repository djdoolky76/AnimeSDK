#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class EE22D1D2CE65DBF5;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define BB0D3A4471C0D786_B962155346DAC05D_OFFSET UNITYSDK_OFFSET(0x1C04190)
#define BB0D3A4471C0D786_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1C04760)
#define BB0D3A4471C0D786_F14BEFCB596EE4D7_OFFSET UNITYSDK_OFFSET(0x1C04450)
#define BB0D3A4471C0D786_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1C044C0)
#define BB0D3A4471C0D786__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int BB0D3A4471C0D786_TypeDefinitionIndex = 366;

class BB0D3A4471C0D786 : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 F801FD6A31CA5CB5; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_1<::System::UInt32>* F77A8D4F375A9C96; // 0x88
	::ABC::UI::MonoLocalizedTmp* ED5CF5574A2EF3E0; // 0x90
	::UnityEngine::UI::Image* B716221E765373AB; // 0x98
	::UnityEngine::Transform* EC0927CAA03BECF3; // 0xA0
	::ABC::UI::MonoButton* E8DAA32F29CC28CD; // 0xA8
	::UnityEngine::GameObject* AC99A9487769AD83; // 0xB0
	::UnityEngine::GameObject* E57D824EE6301854; // 0xB8

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB0D3A4471C0D786_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void B962155346DAC05D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB0D3A4471C0D786_B962155346DAC05D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB0D3A4471C0D786__CTOR_OFFSET))(this);
	}

	::System::Void F14BEFCB596EE4D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB0D3A4471C0D786_F14BEFCB596EE4D7_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::EE22D1D2CE65DBF5* E6982E10A1812960, ::System::Boolean B2325966C2045D62, ::System::Boolean EFC729179C7152FD, ::System::Boolean ABEBB4E48A525177, ::System::Action_1<::System::UInt32>* F330E22437B58CFD)
	{
		return ((::System::Void(*)(::PVOID, ::EE22D1D2CE65DBF5*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BB0D3A4471C0D786_EC3033C0485522FB_OFFSET))(this, E6982E10A1812960, B2325966C2045D62, EFC729179C7152FD, ABEBB4E48A525177, F330E22437B58CFD);
	}
};
