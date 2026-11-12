#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDKJBGGHDBM;
namespace System { class Object; }

#define JDKJBGGHDBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA1BAB0)
#define JDKJBGGHDBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1BAF0)
#define JDKJBGGHDBM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA1BB00)

inline static constexpr unsigned int JDKJBGGHDBM___c_TypeDefinitionIndex = 27905;

	class JDKJBGGHDBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E7E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDKJBGGHDBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM___C_CTOR_OFFSET))(this);
		}

		::JDKJBGGHDBM* __cctor_b__33_0()
		{
			return ((::JDKJBGGHDBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
