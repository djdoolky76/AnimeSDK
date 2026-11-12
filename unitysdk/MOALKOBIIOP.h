#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKHDLEHPOGJ;
class MOALKOBIIOP;
namespace RPG::Client { class GridFightGameSession; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOALKOBIIOP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2DA5C0)
#define MOALKOBIIOP_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xC2DA520)
#define MOALKOBIIOP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC2DA690)

inline static constexpr unsigned int MOALKOBIIOP_TypeDefinitionIndex = 66957;

	class MOALKOBIIOP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::CKHDLEHPOGJ*>* FPJJCBDIAHD; // 0x10
		static ::MOALKOBIIOP** StaticGet_HPEJFCFEBOC()
		{
			return (::MOALKOBIIOP**)UnitySDK::FromName("", "MOALKOBIIOP")->GetStaticField(0xF540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOALKOBIIOP_CTOR_OFFSET))(this);
		}

		static ::MOALKOBIIOP* GGBLHEHJBDO()
		{
			return ((::MOALKOBIIOP*(*)())((::PBYTE)hIl2Cpp + MOALKOBIIOP_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void PAGKOAEOLKA(::RPG::Client::GridFightGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + MOALKOBIIOP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
