#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBCBMJKOBPJ;
namespace System { class Object; }

#define DBCBMJKOBPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F430CB0)
#define DBCBMJKOBPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F430CE0)
#define DBCBMJKOBPJ___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x1F430CF0)

inline static constexpr unsigned int DBCBMJKOBPJ___c_TypeDefinitionIndex = 25899;

	class DBCBMJKOBPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBCBMJKOBPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCBMJKOBPJ___C_CTOR_OFFSET))(this);
		}

		::DBCBMJKOBPJ* __cctor_b__88_0()
		{
			return ((::DBCBMJKOBPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCBMJKOBPJ___C___CCTOR_B__88_0_OFFSET))(this);
		}

	};
