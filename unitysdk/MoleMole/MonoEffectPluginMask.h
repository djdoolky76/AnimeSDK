#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_MONOEFFECTPLUGINMASK_EQUALS_OFFSET UNITYSDK_OFFSET(0x64EDF0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x64EE00)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ALLFALSE_OFFSET UNITYSDK_OFFSET(0x64EB90)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ALLTRUE_OFFSET UNITYSDK_OFFSET(0x64EC00)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x64EB80)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_HUMANIZEDDATA_OFFSET UNITYSDK_OFFSET(0x64EC70)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x64EC80)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x64EF50)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_INCFIJKMIGG_OFFSET UNITYSDK_OFFSET(0x10D3AB30)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x64EEE0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_JKJDNOPEDHM_OFFSET UNITYSDK_OFFSET(0x10D3AC60)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_KANJMAFLMLJ_OFFSET UNITYSDK_OFFSET(0x10D3A8F0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_LOHFJOLEFBB_OFFSET UNITYSDK_OFFSET(0x10D3A9A0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_MIDBCOKBMME_OFFSET UNITYSDK_OFFSET(0x10D3AA30)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_NCKJGABJLNF_OFFSET UNITYSDK_OFFSET(0x64EFC0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_NOGJIJMACNO_OFFSET UNITYSDK_OFFSET(0x10D3ABD0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x64ED10)
#define MOLEMOLE_MONOEFFECTPLUGINMASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D39BF0)
#define MOLEMOLE_MONOEFFECTPLUGINMASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x64ED20)
#define MOLEMOLE_MONOEFFECTPLUGINMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x3FD6C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginMask_TypeDefinitionIndex = 56524;

	struct alignas(4) MonoEffectPluginMask
	{
		::System::UInt64 _data1; // 0x10
		::System::UInt64 _data2; // 0x18
		::System::UInt64 _data3; // 0x20
		::System::UInt64 _data4; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UInt64 LIEKINHMLHP, ::System::UInt64 OLFMMFHOMDM, ::System::UInt64 FIIIJDHEFHL, ::System::UInt64 NPOGMOABPFP)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK__CTOR_OFFSET))(this, LIEKINHMLHP, OLFMMFHOMDM, FIIIJDHEFHL, NPOGMOABPFP);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* MIDFLDFGIIO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK__CTOR_1_OFFSET))(this, MIDFLDFGIIO);
		}

		::System::UInt32 get_capacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_CAPACITY_OFFSET))(this);
		}

		::System::Boolean get_allFalse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ALLFALSE_OFFSET))(this);
		}

		::System::Boolean get_allTrue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ALLTRUE_OFFSET))(this);
		}

		::System::String* get_humanizedData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_HUMANIZEDDATA_OFFSET))(this);
		}

		::System::Boolean get_Item(::System::UInt32 ABHBKFJKINO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GET_ITEM_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void set_Item(::System::UInt32 ABHBKFJKINO, ::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_SET_ITEM_OFFSET))(this, ABHBKFJKINO, EGEGIMGMJHN);
		}

		::System::Boolean Equals(::System::Object* EIFONLCJOPG)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_EQUALS_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
		}

		/*
		static ::MoleMole::MonoEffectPluginMask KANJMAFLMLJ(::MoleMole::MonoEffectPluginMask EJCBEJMGFAJ, ::MoleMole::MonoEffectPluginMask EBFCACIEKBC)
		{
			return ((::MoleMole::MonoEffectPluginMask(*)(::MoleMole::MonoEffectPluginMask, ::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_KANJMAFLMLJ_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::MoleMole::MonoEffectPluginMask LOHFJOLEFBB(::MoleMole::MonoEffectPluginMask EJCBEJMGFAJ)
		{
			return ((::MoleMole::MonoEffectPluginMask(*)(::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_LOHFJOLEFBB_OFFSET))(EJCBEJMGFAJ);
		}
		*/

		static ::System::UInt32 MIDBCOKBMME(::System::UInt64 EGEGIMGMJHN)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_MIDBCOKBMME_OFFSET))(EGEGIMGMJHN);
		}

		::System::Int32 HLPHPBAODIF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_HLPHPBAODIF_OFFSET))(this);
		}

		/*
		static ::System::Boolean INCFIJKMIGG(::MoleMole::MonoEffectPluginMask EJCBEJMGFAJ, ::MoleMole::MonoEffectPluginMask EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoEffectPluginMask, ::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_INCFIJKMIGG_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::System::Boolean NOGJIJMACNO(::MoleMole::MonoEffectPluginMask EJCBEJMGFAJ, ::MoleMole::MonoEffectPluginMask EBFCACIEKBC)
		{
			return ((::System::Boolean(*)(::MoleMole::MonoEffectPluginMask, ::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_NOGJIJMACNO_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		/*
		static ::MoleMole::MonoEffectPluginMask JKJDNOPEDHM(::MoleMole::MonoEffectPluginMask EJCBEJMGFAJ, ::MoleMole::MonoEffectPluginMask EBFCACIEKBC)
		{
			return ((::MoleMole::MonoEffectPluginMask(*)(::MoleMole::MonoEffectPluginMask, ::MoleMole::MonoEffectPluginMask))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_JKJDNOPEDHM_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
		}
		*/

		::System::UInt32 NCKJGABJLNF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINMASK_NCKJGABJLNF_OFFSET))(this);
		}
	};
}
