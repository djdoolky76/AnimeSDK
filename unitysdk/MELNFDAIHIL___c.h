#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MELNFDAIHIL;
namespace System { class Object; }

#define MELNFDAIHIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD5B8B0)
#define MELNFDAIHIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD5B8F0)
#define MELNFDAIHIL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FD5B900)

inline static constexpr unsigned int MELNFDAIHIL___c_TypeDefinitionIndex = 35767;

	class MELNFDAIHIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELNFDAIHIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELNFDAIHIL___C_CTOR_OFFSET))(this);
		}

		::MELNFDAIHIL* __cctor_b__33_0()
		{
			return ((::MELNFDAIHIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELNFDAIHIL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
