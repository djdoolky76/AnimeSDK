#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBNNMNBEJCJ;
namespace System { class Object; }

#define NBNNMNBEJCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202E8EF0)
#define NBNNMNBEJCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202E8F30)
#define NBNNMNBEJCJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x202E8F40)

inline static constexpr unsigned int NBNNMNBEJCJ___c_TypeDefinitionIndex = 32218;

	class NBNNMNBEJCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNNMNBEJCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNMNBEJCJ___C_CTOR_OFFSET))(this);
		}

		::NBNNMNBEJCJ* __cctor_b__33_0()
		{
			return ((::NBNNMNBEJCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNNMNBEJCJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
