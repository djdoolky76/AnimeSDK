#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCNPLNBLPPN;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }

#define FNAIBJPONCC_CTOR_OFFSET UNITYSDK_OFFSET(0x167D9F50)
#define FNAIBJPONCC_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x167DA090)
#define FNAIBJPONCC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x167D9F60)
#define FNAIBJPONCC_MNJOCIFNCFK_OFFSET UNITYSDK_OFFSET(0x167DA2C0)
#define FNAIBJPONCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x167DA4F0)

inline static constexpr unsigned int FNAIBJPONCC_TypeDefinitionIndex = 60547;

	class FNAIBJPONCC : public ::System::Object
	{
	public:
		::BCNPLNBLPPN* ADPIPGEDKOH; // 0x10
		::RPG::Client::IAssetOperation* NHDIHIPANIG; // 0x18
		::System::Void _ctor(::BCNPLNBLPPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCNPLNBLPPN*))((::PBYTE)hIl2Cpp + FNAIBJPONCC_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAIBJPONCC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAIBJPONCC_KEOKEELBKHI_OFFSET))(this);
		}

		::System::Boolean MNJOCIFNCFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAIBJPONCC_MNJOCIFNCFK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAIBJPONCC_TOSTRING_OFFSET))(this);
		}

	};
