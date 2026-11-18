#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/QuickGraph/QuickGraphException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define MOLEMOLE_QUICKGRAPH_NONACYCLICGRAPHEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDBD870)
#define MOLEMOLE_QUICKGRAPH_NONACYCLICGRAPHEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FDBD970)
#define MOLEMOLE_QUICKGRAPH_NONACYCLICGRAPHEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FDBDA90)
#define MOLEMOLE_QUICKGRAPH_NONACYCLICGRAPHEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBD770)

namespace MoleMole::QuickGraph
{
	inline static constexpr unsigned int NonAcyclicGraphException_TypeDefinitionIndex = 28299;

	class NonAcyclicGraphException : public ::MoleMole::QuickGraph::QuickGraphException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKGRAPH_NONACYCLICGRAPHEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* NAPFALLANDL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKGRAPH_NONACYCLICGRAPHEXCEPTION__CTOR_1_OFFSET))(this, NAPFALLANDL);
		}

		::System::Void _ctor_2(::System::String* NAPFALLANDL, ::System::Exception* BDLKAKKCAII)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKGRAPH_NONACYCLICGRAPHEXCEPTION__CTOR_2_OFFSET))(this, NAPFALLANDL, BDLKAKKCAII);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* HMMMOCJAEOA, ::System::Runtime::Serialization::StreamingContext AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + MOLEMOLE_QUICKGRAPH_NONACYCLICGRAPHEXCEPTION__CTOR_3_OFFSET))(this, HMMMOCJAEOA, AAOCANGHBDG);
		}
	};
}
