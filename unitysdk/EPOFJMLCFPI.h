#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/PropertyChangedEventArgs.h"
namespace System { class Object; }
namespace System { class String; }

#define EPOFJMLCFPI_CTOR_OFFSET UNITYSDK_OFFSET(0x155CD600)
#define EPOFJMLCFPI_GET_PROTOCOLDATA_OFFSET UNITYSDK_OFFSET(0x155CD5F0)

inline static constexpr unsigned int EPOFJMLCFPI_TypeDefinitionIndex = 75075;

	class EPOFJMLCFPI : public ::System::ComponentModel::PropertyChangedEventArgs
	{
	public:
		::System::Object* _ProtocolData_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + EPOFJMLCFPI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_ProtocolData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPOFJMLCFPI_GET_PROTOCOLDATA_OFFSET))(this);
		}

	};
