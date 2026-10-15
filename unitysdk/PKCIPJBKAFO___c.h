#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKCIPJBKAFO;
namespace System { class Object; }

#define PKCIPJBKAFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF87F20)
#define PKCIPJBKAFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF87F50)
#define PKCIPJBKAFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF87F60)

inline static constexpr unsigned int PKCIPJBKAFO___c_TypeDefinitionIndex = 28251;

	class PKCIPJBKAFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKCIPJBKAFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO___C_CTOR_OFFSET))(this);
		}

		::PKCIPJBKAFO* __cctor_b__28_0()
		{
			return ((::PKCIPJBKAFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKCIPJBKAFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
