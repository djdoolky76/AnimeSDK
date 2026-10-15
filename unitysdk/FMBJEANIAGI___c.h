#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMBJEANIAGI;
namespace System { class Object; }

#define FMBJEANIAGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3DF850)
#define FMBJEANIAGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DF890)
#define FMBJEANIAGI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E3DF8A0)

inline static constexpr unsigned int FMBJEANIAGI___c_TypeDefinitionIndex = 29798;

	class FMBJEANIAGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x649D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMBJEANIAGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBJEANIAGI___C_CTOR_OFFSET))(this);
		}

		::FMBJEANIAGI* __cctor_b__38_0()
		{
			return ((::FMBJEANIAGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMBJEANIAGI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
