#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDOIEMCFFCA;
namespace System { class Object; }

#define EDOIEMCFFCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E263AB0)
#define EDOIEMCFFCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E263AE0)
#define EDOIEMCFFCA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E263AF0)

inline static constexpr unsigned int EDOIEMCFFCA___c_TypeDefinitionIndex = 32659;

	class EDOIEMCFFCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDOIEMCFFCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOIEMCFFCA___C_CTOR_OFFSET))(this);
		}

		::EDOIEMCFFCA* __cctor_b__38_0()
		{
			return ((::EDOIEMCFFCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOIEMCFFCA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
