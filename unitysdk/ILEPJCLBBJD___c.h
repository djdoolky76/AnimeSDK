#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILEPJCLBBJD;
namespace System { class Object; }

#define ILEPJCLBBJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67E900)
#define ILEPJCLBBJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67E940)
#define ILEPJCLBBJD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E67E950)

inline static constexpr unsigned int ILEPJCLBBJD___c_TypeDefinitionIndex = 28634;

	class ILEPJCLBBJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILEPJCLBBJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPJCLBBJD___C_CTOR_OFFSET))(this);
		}

		::ILEPJCLBBJD* __cctor_b__18_0()
		{
			return ((::ILEPJCLBBJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEPJCLBBJD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
