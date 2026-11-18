#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define MOLEMOLE_QUICKGRAPH_QUICKGRAPHEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDBD8F0)
#define MOLEMOLE_QUICKGRAPH_QUICKGRAPHEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FDBDA00)
#define MOLEMOLE_QUICKGRAPH_QUICKGRAPHEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FDBDAE0)
#define MOLEMOLE_QUICKGRAPH_QUICKGRAPHEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD7F0)

namespace MoleMole::QuickGraph
{
	inline static constexpr unsigned int QuickGraphException_TypeDefinitionIndex = 28162;

	class QuickGraphException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKGRAPH_QUICKGRAPHEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* NAPFALLANDL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKGRAPH_QUICKGRAPHEXCEPTION__CTOR_1_OFFSET))(this, NAPFALLANDL);
		}

		::System::Void _ctor_2(::System::String* NAPFALLANDL, ::System::Exception* BDLKAKKCAII)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKGRAPH_QUICKGRAPHEXCEPTION__CTOR_2_OFFSET))(this, NAPFALLANDL, BDLKAKKCAII);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* HMMMOCJAEOA, ::System::Runtime::Serialization::StreamingContext AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKGRAPH_QUICKGRAPHEXCEPTION__CTOR_3_OFFSET))(this, HMMMOCJAEOA, AAOCANGHBDG);
		}
	};
}
