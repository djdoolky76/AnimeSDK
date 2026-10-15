#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"
class INCOINEIGHJ;

#define HLFMLCCHMCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDEB00)
#define HLFMLCCHMCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CBDEB80)
#define HLFMLCCHMCA_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1CBDF2E0)
#define HLFMLCCHMCA_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0x1CBDEDE0)
#define HLFMLCCHMCA_PABMJKIHLHG_OFFSET UNITYSDK_OFFSET(0x1CBDED30)
#define HLFMLCCHMCA_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1CBDF2F0)

	class HLFMLCCHMCA : public ::System::Object
	{
	public:
		::INCOINEIGHJ* _Graph_k__BackingField; // 0x10
		::RPG::Client::Multithread::SchedulerType NOMPNLAMMIF; // 0x18
		::System::Void _ctor(::RPG::Client::Multithread::SchedulerType a1, ::INCOINEIGHJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType, ::INCOINEIGHJ*))((::PBYTE)hIl2Cpp + HLFMLCCHMCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFMLCCHMCA_DISPOSE_OFFSET))(this);
		}

		::System::Void PABMJKIHLHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFMLCCHMCA_PABMJKIHLHG_OFFSET))(this);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFMLCCHMCA_KHNCMBEFIKI_OFFSET))(this);
		}

		::INCOINEIGHJ* get_Graph()
		{
			return ((::INCOINEIGHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFMLCCHMCA_GET_GRAPH_OFFSET))(this);
		}

		::System::Void set_Graph(::INCOINEIGHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INCOINEIGHJ*))((::PBYTE)hIl2Cpp + HLFMLCCHMCA_SET_GRAPH_OFFSET))(this, a1);
		}

	};
