#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDNHIMDLIHH;
namespace System { class Object; }

#define JDNHIMDLIHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA1F920)
#define JDNHIMDLIHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1F960)
#define JDNHIMDLIHH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FA1F970)

inline static constexpr unsigned int JDNHIMDLIHH___c_TypeDefinitionIndex = 27214;

	class JDNHIMDLIHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ED10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDNHIMDLIHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNHIMDLIHH___C_CTOR_OFFSET))(this);
		}

		::JDNHIMDLIHH* __cctor_b__18_0()
		{
			return ((::JDNHIMDLIHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNHIMDLIHH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
