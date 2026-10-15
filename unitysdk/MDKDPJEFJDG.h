#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDNECKFHLEM;
namespace RPG::Client { class TabView; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDKDPJEFJDG_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A67D0)
#define MDKDPJEFJDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8A7040)
#define MDKDPJEFJDG_GDEJKMCGIMO_OFFSET UNITYSDK_OFFSET(0xB8A6E20)
#define MDKDPJEFJDG_GELCGNKGEMN_OFFSET UNITYSDK_OFFSET(0xB8A6C30)

inline static constexpr unsigned int MDKDPJEFJDG_TypeDefinitionIndex = 49821;

	class MDKDPJEFJDG : public ::System::Object
	{
	public:
		::System::Action_1<::EDNECKFHLEM*>* DFHDMFHHAOH; // 0x10
		::System::Collections::Generic::Dictionary_2<::EDNECKFHLEM*, ::System::IDisposable*>* LLOGGOIPHBC; // 0x18
		::System::Action_1<::EDNECKFHLEM*>* OHLCAJMAAKH; // 0x20
		::RPG::Client::TabView* PEOHNLJEFLJ; // 0x28
		::System::Void _ctor(::RPG::Client::TabView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*))((::PBYTE)hIl2Cpp + MDKDPJEFJDG_CTOR_OFFSET))(this, a1);
		}

		::System::Void GELCGNKGEMN(::EDNECKFHLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + MDKDPJEFJDG_GELCGNKGEMN_OFFSET))(this, a1);
		}

		::System::Void GDEJKMCGIMO(::EDNECKFHLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + MDKDPJEFJDG_GDEJKMCGIMO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKDPJEFJDG_DISPOSE_OFFSET))(this);
		}

	};
