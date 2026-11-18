#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGOBJKFDAHJ.h"
#include "unitysdk/OMPBJPFCPFH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1734DD00)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_BALLPARK_OFFSET UNITYSDK_OFFSET(0x1734D530)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1734D3F0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1734D3C0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x1734D800)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_VALIDAREA_OFFSET UNITYSDK_OFFSET(0x1734D910)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_LOADANDCHECK_OFFSET UNITYSDK_OFFSET(0x1734DC10)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_SET_ISLOADALL_OFFSET UNITYSDK_OFFSET(0x1734D3D0)
#define MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1734D3E0)

namespace MoleMole::FlatBuffers::Config
{
	inline static constexpr unsigned int RABMapConfigTemplate_TypeDefinitionIndex = 9943;

	class RABMapConfigTemplate : public ::System::Object
	{
	public:
		::HGOBJKFDAHJ m_Data; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* m_Ballpark; // 0x20
		::KGBFLHNJHHN* m_Notify; // 0x28
		::System::String* m_StageName; // 0x30
		::System::Collections::Generic::List_1<::OMPBJPFCPFH>* m_ValidArea; // 0x38
		::System::Int32 m_ID; // 0x40
		::System::Byte m_VarLoadedCount; // 0x44
		::System::Byte m_Mask0; // 0x45
		::System::Boolean _IsLoadAll_k__BackingField; // 0x46

		::System::Void _ctor(::HGOBJKFDAHJ data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::HGOBJKFDAHJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean get_IsLoadAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_ISLOADALL_OFFSET))(this);
		}

		::System::Void set_IsLoadAll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_SET_ISLOADALL_OFFSET))(this, value);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_Ballpark()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_BALLPARK_OFFSET))(this);
		}

		::System::String* get_StageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OMPBJPFCPFH>* get_ValidArea()
		{
			return ((::System::Collections::Generic::List_1<::OMPBJPFCPFH>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_GET_VALIDAREA_OFFSET))(this);
		}

		::System::Void LoadAndCheck()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_LOADANDCHECK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLATBUFFERS_CONFIG_RABMAPCONFIGTEMPLATE_CLEAR_OFFSET))(this);
		}
	};
}
