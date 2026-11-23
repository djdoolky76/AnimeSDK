#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define F73A66661D1F412E_B93AD9C341F56026_OFFSET UNITYSDK_OFFSET(0x3CDC960)
#define F73A66661D1F412E_FB7841ED9C595492_OFFSET UNITYSDK_OFFSET(0x3CDC890)
#define F73A66661D1F412E_FF0997C535275E60_OFFSET UNITYSDK_OFFSET(0x3CDC9F0)

inline static constexpr unsigned int F73A66661D1F412E_TypeDefinitionIndex = 10655;

class F73A66661D1F412E : public ::System::Object
{
public:
	static ::System::Text::StringBuilder** StaticGet_B9D9CB4D8B09A930()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(F73A66661D1F412E_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Text::StringBuilder* FB7841ED9C595492(::System::Int32 B74B2FACA9F61AFB)
	{
		return ((::System::Text::StringBuilder*(*)(::System::Int32))((::PBYTE)hIl2Cpp + F73A66661D1F412E_FB7841ED9C595492_OFFSET))(B74B2FACA9F61AFB);
	}

	static ::System::String* B93AD9C341F56026(::System::Text::StringBuilder* A94D8812A3A79CC8)
	{
		return ((::System::String*(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + F73A66661D1F412E_B93AD9C341F56026_OFFSET))(A94D8812A3A79CC8);
	}

	static ::System::Void FF0997C535275E60(::System::Text::StringBuilder* A94D8812A3A79CC8)
	{
		return ((::System::Void(*)(::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + F73A66661D1F412E_FF0997C535275E60_OFFSET))(A94D8812A3A79CC8);
	}
};
