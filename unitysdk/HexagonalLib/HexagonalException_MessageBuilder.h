#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HexagonalLib/HexagonalGrid.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_APPEND_1_OFFSET UNITYSDK_OFFSET(0x1F5466F0)
#define HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_APPEND_2_OFFSET UNITYSDK_OFFSET(0x1F5464D0)
#define HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_APPEND_3_OFFSET UNITYSDK_OFFSET(0x1F546A90)
#define HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_APPEND_OFFSET UNITYSDK_OFFSET(0x1F5469D0)
#define HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F546580)
#define HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F546950)
#define HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F546B60)

namespace HexagonalLib
{
	inline static constexpr unsigned int HexagonalException_MessageBuilder_TypeDefinitionIndex = 28800;

	class HexagonalException_MessageBuilder : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* _message; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER__CTOR_OFFSET))(this);
		}

		::HexagonalLib::HexagonalException_MessageBuilder* Append(::System::String* message)
		{
			return ((::HexagonalLib::HexagonalException_MessageBuilder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_APPEND_OFFSET))(this, message);
		}

		::HexagonalLib::HexagonalException_MessageBuilder* Append_1(::HexagonalLib::HexagonalGrid grid)
		{
			return ((::HexagonalLib::HexagonalException_MessageBuilder*(*)(::PVOID, ::HexagonalLib::HexagonalGrid))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_APPEND_1_OFFSET))(this, grid);
		}

		::HexagonalLib::HexagonalException_MessageBuilder* Append_2(::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Object*>>* fields)
		{
			return ((::HexagonalLib::HexagonalException_MessageBuilder*(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::System::String*, ::System::Object*>>*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_APPEND_2_OFFSET))(this, fields);
		}

		::System::Void Append_3(::System::String* paramName, ::System::Object* paramValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_APPEND_3_OFFSET))(this, paramName, paramValue);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEXAGONALLIB_HEXAGONALEXCEPTION_MESSAGEBUILDER___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
