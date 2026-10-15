#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJMNHDLJKLE;
namespace System { class Object; }

#define CJMNHDLJKLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B6EC0)
#define CJMNHDLJKLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B6F00)
#define CJMNHDLJKLE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E0B6F10)

inline static constexpr unsigned int CJMNHDLJKLE___c_TypeDefinitionIndex = 29012;

	class CJMNHDLJKLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJMNHDLJKLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNHDLJKLE___C_CTOR_OFFSET))(this);
		}

		::CJMNHDLJKLE* __cctor_b__18_0()
		{
			return ((::CJMNHDLJKLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNHDLJKLE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
