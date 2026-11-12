#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIPGDFDCKLE;
namespace System { class Object; }

#define MIPGDFDCKLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD95EF0)
#define MIPGDFDCKLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD95F30)
#define MIPGDFDCKLE___C___CCTOR_B__72_0_OFFSET UNITYSDK_OFFSET(0x1FD95F40)

inline static constexpr unsigned int MIPGDFDCKLE___c_TypeDefinitionIndex = 34256;

	class MIPGDFDCKLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIPGDFDCKLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPGDFDCKLE___C_CTOR_OFFSET))(this);
		}

		::MIPGDFDCKLE* __cctor_b__72_0()
		{
			return ((::MIPGDFDCKLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPGDFDCKLE___C___CCTOR_B__72_0_OFFSET))(this);
		}

	};
