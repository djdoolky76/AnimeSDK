#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMPFHOMMBH;
namespace System { class Object; }

#define BOMPFHOMMBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E010540)
#define BOMPFHOMMBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E010570)
#define BOMPFHOMMBH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E010580)

inline static constexpr unsigned int BOMPFHOMMBH___c_TypeDefinitionIndex = 26029;

	class BOMPFHOMMBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOMPFHOMMBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH___C_CTOR_OFFSET))(this);
		}

		::BOMPFHOMMBH* __cctor_b__33_0()
		{
			return ((::BOMPFHOMMBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
