#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCBKCCPECEN;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNMLLDONLPO_AJMAEFECOGO_OFFSET UNITYSDK_OFFSET(0x11FD4F30)
#define DNMLLDONLPO_BDNJHJAJJJJ_OFFSET UNITYSDK_OFFSET(0x11FD4FC0)
#define DNMLLDONLPO_CJPIELJKFIB_OFFSET UNITYSDK_OFFSET(0x11FD50C0)
#define DNMLLDONLPO_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD4800)
#define DNMLLDONLPO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x11FD4890)
#define DNMLLDONLPO_JOGDKNNGNKH_OFFSET UNITYSDK_OFFSET(0x11FD4C80)
#define DNMLLDONLPO_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0x11FD4BD0)
#define DNMLLDONLPO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x11FD4850)
#define DNMLLDONLPO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x11FD4A30)

inline static constexpr unsigned int DNMLLDONLPO_TypeDefinitionIndex = 61240;

	class DNMLLDONLPO : public ::System::Object
	{
	public:
		::System::Object* IIMKAHKCJOM; // 0x10
		::System::Action* LIHPGEGGBEL; // 0x18
		::System::Action* KOCOGBKGOHH; // 0x20
		::System::Action* FMNFMLKMHHL; // 0x28
		::System::Collections::Generic::List_1<::LCBKCCPECEN*>* HFKEGIJPMEP; // 0x30
		::System::Int32 BAALHEJKGPP; // 0x38
		::System::Int32 GAACMPEEPOM; // 0x3C
		::System::Int32 ECNABJDGLFH; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMLLDONLPO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMLLDONLPO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMLLDONLPO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMLLDONLPO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KHFHNDEBGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMLLDONLPO_KHFHNDEBGDH_OFFSET))(this);
		}

		::System::Void JOGDKNNGNKH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNMLLDONLPO_JOGDKNNGNKH_OFFSET))(this, a1);
		}

		::LCBKCCPECEN* AJMAEFECOGO()
		{
			return ((::LCBKCCPECEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMLLDONLPO_AJMAEFECOGO_OFFSET))(this);
		}

		::System::Boolean BDNJHJAJJJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMLLDONLPO_BDNJHJAJJJJ_OFFSET))(this);
		}

		::LCBKCCPECEN* CJPIELJKFIB()
		{
			return ((::LCBKCCPECEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMLLDONLPO_CJPIELJKFIB_OFFSET))(this);
		}

	};
