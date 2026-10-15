#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDNECKFHLEM;
class NJOJGMKFPFA;
class PFIDBJDJEKK;
namespace RPG::Client { class TabView; }
namespace System { class Object; }

#define EDNECKFHLEM_BJJENLHHGAG_OFFSET UNITYSDK_OFFSET(0x13328350)
#define EDNECKFHLEM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x13327E20)
#define EDNECKFHLEM_CTOR_OFFSET UNITYSDK_OFFSET(0x13327D00)
#define EDNECKFHLEM_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0x13327F50)
#define EDNECKFHLEM_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x13328090)
#define EDNECKFHLEM_GET_TABVIEW_OFFSET UNITYSDK_OFFSET(0x13327EB0)
#define EDNECKFHLEM_HKMGGMCDCAO_OFFSET UNITYSDK_OFFSET(0x13328180)
#define EDNECKFHLEM_HNMKDEINJFP_OFFSET UNITYSDK_OFFSET(0x13327ED0)
#define EDNECKFHLEM_IFNOFKAIFGB_OFFSET UNITYSDK_OFFSET(0x13327F70)
#define EDNECKFHLEM_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x13328040)
#define EDNECKFHLEM_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0x13327F10)
#define EDNECKFHLEM_OBLPONMLAHE_OFFSET UNITYSDK_OFFSET(0x133280B0)
#define EDNECKFHLEM_OLMBPFCOLFK_OFFSET UNITYSDK_OFFSET(0x13327FB0)
#define EDNECKFHLEM_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x13328000)
#define EDNECKFHLEM_PCOJIDKOJCO_OFFSET UNITYSDK_OFFSET(0x13327DD0)
#define EDNECKFHLEM_SET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0x13327F60)
#define EDNECKFHLEM_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x133280A0)
#define EDNECKFHLEM_SET_TABVIEW_OFFSET UNITYSDK_OFFSET(0x13327EC0)

inline static constexpr unsigned int EDNECKFHLEM_TypeDefinitionIndex = 72674;

	class EDNECKFHLEM : public ::System::Object
	{
	public:
		::NJOJGMKFPFA* CPEPOHBPJHM; // 0x10
		::RPG::Client::TabView* _TabView_k__BackingField; // 0x18
		::PFIDBJDJEKK* LFGMLJCCPCH; // 0x20
		::System::Object* _DataContext_k__BackingField; // 0x28
		::System::Boolean NHJPEBLAJEN; // 0x30
		::System::Boolean FHBNNGCEPFD; // 0x31
		::System::Boolean _IsLocked_k__BackingField; // 0x32
		::System::Byte _padding0[0x1];
		::System::Int32 FFNBLDFFMCN; // 0x34
		::System::Void _ctor(::NJOJGMKFPFA* a1, ::PFIDBJDJEKK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NJOJGMKFPFA*, ::PFIDBJDJEKK*))((::PBYTE)hIl2Cpp + EDNECKFHLEM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::EDNECKFHLEM* BPLPBPMEODA(::NJOJGMKFPFA* a1, ::PFIDBJDJEKK* a2)
		{
			return ((::EDNECKFHLEM*(*)(::NJOJGMKFPFA*, ::PFIDBJDJEKK*))((::PBYTE)hIl2Cpp + EDNECKFHLEM_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::RPG::Client::TabView* get_TabView()
		{
			return ((::RPG::Client::TabView*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_GET_TABVIEW_OFFSET))(this);
		}

		::System::Void set_TabView(::RPG::Client::TabView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TabView*))((::PBYTE)hIl2Cpp + EDNECKFHLEM_SET_TABVIEW_OFFSET))(this, a1);
		}

		::NJOJGMKFPFA* HNMKDEINJFP()
		{
			return ((::NJOJGMKFPFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_HNMKDEINJFP_OFFSET))(this);
		}

		::PFIDBJDJEKK* KCEDLPGDJLN()
		{
			return ((::PFIDBJDJEKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Object* get_DataContext()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_GET_DATACONTEXT_OFFSET))(this);
		}

		::System::Void set_DataContext(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDNECKFHLEM_SET_DATACONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean IFNOFKAIFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_IFNOFKAIFGB_OFFSET))(this);
		}

		::System::Void OLMBPFCOLFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDNECKFHLEM_OLMBPFCOLFK_OFFSET))(this, a1);
		}

		::System::Int32 PCKEJOJIOOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDNECKFHLEM_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EDNECKFHLEM_SET_ISLOCKED_OFFSET))(this, a1);
		}

		::System::Void PCOJIDKOJCO(::PFIDBJDJEKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFIDBJDJEKK*))((::PBYTE)hIl2Cpp + EDNECKFHLEM_PCOJIDKOJCO_OFFSET))(this, a1);
		}

		::System::Void OBLPONMLAHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_OBLPONMLAHE_OFFSET))(this);
		}

		::System::Void HKMGGMCDCAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_HKMGGMCDCAO_OFFSET))(this);
		}

		::System::Void BJJENLHHGAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNECKFHLEM_BJJENLHHGAG_OFFSET))(this);
		}

	};
