#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFGCHHHMFNE;
namespace System { class Object; }

#define IFGCHHHMFNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20295580)
#define IFGCHHHMFNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202955C0)
#define IFGCHHHMFNE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x202955D0)

inline static constexpr unsigned int IFGCHHHMFNE___c_TypeDefinitionIndex = 29948;

	class IFGCHHHMFNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x461A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFGCHHHMFNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCHHHMFNE___C_CTOR_OFFSET))(this);
		}

		::IFGCHHHMFNE* __cctor_b__18_0()
		{
			return ((::IFGCHHHMFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGCHHHMFNE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
