#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA59860)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS___C__CREATEINSTANCE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1EA598B0)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA598A0)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphBinaryUtils___c_TypeDefinitionIndex = 30718;

	class GraphBinaryUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GraphBinaryUtils___c_TypeDefinitionIndex)->GetStaticField(0x26A60);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GraphBinaryUtils___c_TypeDefinitionIndex)->GetStaticField(0x26A68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS___C__CTOR_OFFSET))(this);
		}

		::System::String* _CreateInstance_b__0_0(::System::Type* t)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS___C__CREATEINSTANCE_B__0_0_OFFSET))(this, t);
		}
	};
}
