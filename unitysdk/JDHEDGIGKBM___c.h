#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDHEDGIGKBM;
namespace System { class Object; }

#define JDHEDGIGKBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA19B60)
#define JDHEDGIGKBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA19BA0)
#define JDHEDGIGKBM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA19BB0)

inline static constexpr unsigned int JDHEDGIGKBM___c_TypeDefinitionIndex = 31342;

	class JDHEDGIGKBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDHEDGIGKBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHEDGIGKBM___C_CTOR_OFFSET))(this);
		}

		::JDHEDGIGKBM* __cctor_b__23_0()
		{
			return ((::JDHEDGIGKBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHEDGIGKBM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
