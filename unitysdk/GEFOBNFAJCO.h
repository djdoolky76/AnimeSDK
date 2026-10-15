#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDNECKFHLEM;
namespace RPG::Client { class TabView; }
namespace System { class Action; }
namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEFOBNFAJCO_CTOR_OFFSET UNITYSDK_OFFSET(0x159D3D20)
#define GEFOBNFAJCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159D4590)
#define GEFOBNFAJCO_GDEJKMCGIMO_OFFSET UNITYSDK_OFFSET(0x159D4370)
#define GEFOBNFAJCO_GELCGNKGEMN_OFFSET UNITYSDK_OFFSET(0x159D4180)

	class GEFOBNFAJCO : public ::System::Object
	{
	public:
		::System::Action* DFHDMFHHAOH; // 0x10
		::RPG::Client::TabView* PEOHNLJEFLJ; // 0x18
		::System::Action* OHLCAJMAAKH; // 0x20
		::System::Collections::Generic::Dictionary_2<::EDNECKFHLEM*, ::System::IDisposable*>* LLOGGOIPHBC; // 0x28
		::System::Void _ctor(::RPG::Client::TabView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*))((::PBYTE)hIl2Cpp + GEFOBNFAJCO_CTOR_OFFSET))(this, a1);
		}

		::System::Void GELCGNKGEMN(::EDNECKFHLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + GEFOBNFAJCO_GELCGNKGEMN_OFFSET))(this, a1);
		}

		::System::Void GDEJKMCGIMO(::EDNECKFHLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDNECKFHLEM*))((::PBYTE)hIl2Cpp + GEFOBNFAJCO_GDEJKMCGIMO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFOBNFAJCO_DISPOSE_OFFSET))(this);
		}

	};
