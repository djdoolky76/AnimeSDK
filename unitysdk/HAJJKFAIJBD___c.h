#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJJKFAIJBD;
namespace System { class Object; }

#define HAJJKFAIJBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD10E90)
#define HAJJKFAIJBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD10ED0)
#define HAJJKFAIJBD___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1FD10EE0)

inline static constexpr unsigned int HAJJKFAIJBD___c_TypeDefinitionIndex = 29178;

	class HAJJKFAIJBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F6E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAJJKFAIJBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJJKFAIJBD___C_CTOR_OFFSET))(this);
		}

		::HAJJKFAIJBD* __cctor_b__42_0()
		{
			return ((::HAJJKFAIJBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJJKFAIJBD___C___CCTOR_B__42_0_OFFSET))(this);
		}

	};
