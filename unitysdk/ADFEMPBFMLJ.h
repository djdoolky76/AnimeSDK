#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class SwitchCase; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADFEMPBFMLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB136670)
#define ADFEMPBFMLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1368F0)
#define ADFEMPBFMLJ_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB137730)
#define ADFEMPBFMLJ_GLNMMIEPAIO_OFFSET UNITYSDK_OFFSET(0xB136B90)
#define ADFEMPBFMLJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB137500)
#define ADFEMPBFMLJ_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB136FA0)
#define ADFEMPBFMLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB136B40)
#define ADFEMPBFMLJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB136D90)
#define ADFEMPBFMLJ_TICK_OFFSET UNITYSDK_OFFSET(0xB1372F0)

	class ADFEMPBFMLJ : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::GELIALJDFBL*>* IFMDBDJCCCI; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* APMBCDPOPAJ; // 0x28
		::RPG::GameCore::SwitchCase* OFKGLJOAMLD; // 0x30
		::System::Int32 FBKFMMLDJAE; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCase*))((::PBYTE)hIl2Cpp + ADFEMPBFMLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEMPBFMLJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEMPBFMLJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEMPBFMLJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEMPBFMLJ_ONSKIP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADFEMPBFMLJ_TICK_OFFSET))(this, a1);
		}

		::System::Void GLNMMIEPAIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEMPBFMLJ_GLNMMIEPAIO_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEMPBFMLJ_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADFEMPBFMLJ_GET_FORCESKIP_OFFSET))(this);
		}

	};
