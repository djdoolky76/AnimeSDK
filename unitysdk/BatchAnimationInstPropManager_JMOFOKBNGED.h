#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::Rendering { class BatchAnimation; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC1B3AB0)
#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_ADDCBHAPPGG_OFFSET UNITYSDK_OFFSET(0xC1B3F30)
#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_ADEOGBKEHCE_OFFSET UNITYSDK_OFFSET(0xC1B3D30)
#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_CTOR_OFFSET UNITYSDK_OFFSET(0xC1B2A90)
#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_DDJGDHPNIMP_OFFSET UNITYSDK_OFFSET(0xC1B40C0)
#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_EPGCEINGMCM_OFFSET UNITYSDK_OFFSET(0xC1B3E00)
#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_HPGFOADIMHB_OFFSET UNITYSDK_OFFSET(0xC1B3350)
#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xC1B2E30)
#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_MGFEMJDBLLD_OFFSET UNITYSDK_OFFSET(0xC1B37E0)
#define BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_NBIEBGEOAMC_OFFSET UNITYSDK_OFFSET(0xC1B2C30)

inline static constexpr unsigned int BatchAnimationInstPropManager_JMOFOKBNGED_TypeDefinitionIndex = 47291;

	class BatchAnimationInstPropManager_JMOFOKBNGED : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::BatchAnimationInstance*, ::System::UInt32>* JCLBOPFALAN; // 0x10
		::System::Collections::Generic::Stack_1<::System::UInt32>* BFJNMKAOLDG; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* HDOCDCHFKCA; // 0x20
		::System::String* LNCOKKIPAEP; // 0x28
		::Unity::Collections::NativeArray_1<::System::Single> JAHJLFPNFGJ; // 0x30
		::System::Byte _padding0[0x8];
		::System::Int32 JIKGOAPHOKF; // 0x40
		::System::Int32 OBPKAPNLJEK; // 0x44
		::System::Int32 OJILJLBIMIC; // 0x48
		::System::Int32 LECPAKBIAHA; // 0x4C
		::System::Int32 CJPKHBAMFML; // 0x50
		::System::Boolean GFJPFAOKHCG; // 0x54
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NBIEBGEOAMC(::System::Collections::Generic::List_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_NBIEBGEOAMC_OFFSET))(this, a1);
		}

		::System::Void HPGFOADIMHB(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::Single>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_HPGFOADIMHB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MGFEMJDBLLD(::UnityEngine::Rendering::BatchAnimationInstance* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_MGFEMJDBLLD_OFFSET))(this, a1, a2);
		}

		::System::Void ADDCBHAPPGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_ADDCBHAPPGG_OFFSET))(this, a1);
		}

		::System::UInt32 DDJGDHPNIMP(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_DDJGDHPNIMP_OFFSET))(this, a1, a2);
		}

		::System::Void ADEOGBKEHCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_ADEOGBKEHCE_OFFSET))(this);
		}

		::System::UInt32 EPGCEINGMCM(::System::Collections::Generic::List_1<::System::Single>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_EPGCEINGMCM_OFFSET))(this, a1);
		}

		::System::Void KHNCMBEFIKI(::UnityEngine::Rendering::BatchAnimation* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimation*, ::System::Int32))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_KHNCMBEFIKI_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONINSTPROPMANAGER_JMOFOKBNGED_ABKBOGIGAEH_OFFSET))(this);
		}

	};
