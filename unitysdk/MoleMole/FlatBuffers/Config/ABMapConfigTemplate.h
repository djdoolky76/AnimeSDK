#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKDIAGHHIME.h"
#include "unitysdk/OMPBJPFCPFH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x19112EE0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_BALLPARK_OFFSET UNITYSDK_OFFSET(0x19112710)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_ID_OFFSET UNITYSDK_OFFSET(0x191125D0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x191125A0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x191129E0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_VALIDAREA_OFFSET UNITYSDK_OFFSET(0x19112AF0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_LOADANDCHECK_OFFSET UNITYSDK_OFFSET(0x19112DF0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_SET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x191125B0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x191125C0)

namespace MoleMole::FlatBuffers::Config
{
	inline static constexpr unsigned int ABMapConfigTemplate_TypeDefinitionIndex = 14004;

	class ABMapConfigTemplate : public ::System::Object
	{
	public:
		::NKDIAGHHIME m_Data; // 0x10
		::System::Collections::Generic::List_1<::OMPBJPFCPFH>* m_ValidArea; // 0x20
		::KGBFLHNJHHN* m_Notify; // 0x28
		::System::String* m_StageName; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* m_Ballpark; // 0x38
		::System::Boolean _IsLoadAll_k__BackingField; // 0x40
		::System::Byte m_VarLoadedCount; // 0x41
		::System::Byte m_Mask0; // 0x42
		::System::Byte _padding0[0x1];
		::System::Int32 m_ID; // 0x44

		::System::Void _ctor(::NKDIAGHHIME data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::NKDIAGHHIME, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean get_IsLoadAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_ISLOADALL_OFFSET))(this);
		}

		::System::Void set_IsLoadAll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_SET_ISLOADALL_OFFSET))(this, value);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_Ballpark()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_BALLPARK_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OMPBJPFCPFH>* get_ValidArea()
		{
			return ((::System::Collections::Generic::List_1<::OMPBJPFCPFH>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_GET_VALIDAREA_OFFSET))(this);
		}

		::System::Void LoadAndCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_LOADANDCHECK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_ABMAPCONFIGTEMPLATE_CLEAR_OFFSET))(this);
		}
	};
}
