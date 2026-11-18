#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x945230)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x945240)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x9450A0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x945110)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x64EB80)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x945180)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x945190)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x9453A0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x1EFCB900)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x945320)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_JKJDNOPEDHM_OFFSET UNITYSDK_OFFSET(0x1EFCB850)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_KANJMAFLMLJ_OFFSET UNITYSDK_OFFSET(0x1EFCBA30)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_LOHFJOLEFBB_OFFSET UNITYSDK_OFFSET(0x1EFCBAE0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_MIDBCOKBMME_OFFSET UNITYSDK_OFFSET(0x1EFCBB70)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_NCKJGABJLNF_OFFSET UNITYSDK_OFFSET(0x945390)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x1EFCB9A0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x945220)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFCA8E0)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x64ED20)
#define MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x3FD6C0)

namespace MoleMole::Arcade::CoreBase
{
	inline static constexpr unsigned int ComponentMask_TypeDefinitionIndex = 28886;

	struct alignas(4) ComponentMask
	{
		::System::UInt64 _data1; // 0x10
		::System::UInt64 _data2; // 0x18
		::System::UInt64 _data3; // 0x20
		::System::UInt64 _data4; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UInt64 LIEKINHMLHP, ::System::UInt64 OLFMMFHOMDM, ::System::UInt64 FIIIJDHEFHL, ::System::UInt64 NPOGMOABPFP)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CTOR_OFFSET))(this, LIEKINHMLHP, OLFMMFHOMDM, FIIIJDHEFHL, NPOGMOABPFP);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* MIDFLDFGIIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK__CTOR_1_OFFSET))(this, MIDFLDFGIIO);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 ABHBKFJKINO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GET_ITEM_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void set_Item(::System::UInt32 ABHBKFJKINO, ::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_SET_ITEM_OFFSET))(this, ABHBKFJKINO, EGEGIMGMJHN);
		}

		::System::Boolean Equals(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_EQUALS_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::UInt32 NCKJGABJLNF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_NCKJGABJLNF_OFFSET))(this);
		}

		/*
		static ::MoleMole::Arcade::CoreBase::ComponentMask JKJDNOPEDHM(::MoleMole::Arcade::CoreBase::ComponentMask EJCBEJMGFAJ, ::MoleMole::Arcade::CoreBase::ComponentMask EBFCACIEKBC)
		{
			return ((::MoleMole::Arcade::CoreBase::ComponentMask(*)(::MoleMole::Arcade::CoreBase::ComponentMask, ::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_JKJDNOPEDHM_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::System::Boolean INCFIJKMIGG(::MoleMole::Arcade::CoreBase::ComponentMask EJCBEJMGFAJ, ::MoleMole::Arcade::CoreBase::ComponentMask EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::Arcade::CoreBase::ComponentMask, ::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::System::Boolean NOGJIJMACNO(::MoleMole::Arcade::CoreBase::ComponentMask EJCBEJMGFAJ, ::MoleMole::Arcade::CoreBase::ComponentMask EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::Arcade::CoreBase::ComponentMask, ::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::MoleMole::Arcade::CoreBase::ComponentMask KANJMAFLMLJ(::MoleMole::Arcade::CoreBase::ComponentMask EJCBEJMGFAJ, ::MoleMole::Arcade::CoreBase::ComponentMask EBFCACIEKBC)
		{
			return ((::MoleMole::Arcade::CoreBase::ComponentMask(*)(::MoleMole::Arcade::CoreBase::ComponentMask, ::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_KANJMAFLMLJ_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::MoleMole::Arcade::CoreBase::ComponentMask LOHFJOLEFBB(::MoleMole::Arcade::CoreBase::ComponentMask EJCBEJMGFAJ)
		{
			return ((::MoleMole::Arcade::CoreBase::ComponentMask(*)(::MoleMole::Arcade::CoreBase::ComponentMask))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_LOHFJOLEFBB_OFFSET))(EJCBEJMGFAJ);
		}
		*/

		static ::System::UInt32 MIDBCOKBMME(::System::UInt64 EGEGIMGMJHN)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_MIDBCOKBMME_OFFSET))(EGEGIMGMJHN);
		}

		::System::Int32 HLPHPBAODIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COREBASE_COMPONENTMASK_HLPHPBAODIF_OFFSET))(this);
		}
	};
}
