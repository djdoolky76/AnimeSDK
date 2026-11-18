#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define FLOWCANVAS_TYPECONVERTER_HASCONVERTION_OFFSET UNITYSDK_OFFSET(0x1EF4FE30)
#define FLOWCANVAS_TYPECONVERTER_QUICKCONVERT_1_OFFSET UNITYSDK_OFFSET(0x1EF4FEB0)

namespace FlowCanvas
{
	inline static constexpr unsigned int TypeConverter_TypeDefinitionIndex = 30590;

	class TypeConverter : public ::System::Object
	{
	public:
		static ::System::Boolean HasConvertion(::System::Type* sourceType, ::System::Type* targetType)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_TYPECONVERTER_HASCONVERTION_OFFSET))(sourceType, targetType);
		}

		static ::System::Object* QuickConvert_1(::System::Object* obj, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_TYPECONVERTER_QUICKCONVERT_1_OFFSET))(obj, type);
		}
	};
}
