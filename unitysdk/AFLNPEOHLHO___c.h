#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFLNPEOHLHO;
namespace System { class Object; }

#define AFLNPEOHLHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11B430)
#define AFLNPEOHLHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11B460)
#define AFLNPEOHLHO___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E11B470)

inline static constexpr unsigned int AFLNPEOHLHO___c_TypeDefinitionIndex = 34334;

	class AFLNPEOHLHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EDD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFLNPEOHLHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO___C_CTOR_OFFSET))(this);
		}

		::AFLNPEOHLHO* __cctor_b__38_0()
		{
			return ((::AFLNPEOHLHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLNPEOHLHO___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
