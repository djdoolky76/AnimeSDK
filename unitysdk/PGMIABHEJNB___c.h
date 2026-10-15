#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGMIABHEJNB;
namespace System { class Object; }

#define PGMIABHEJNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF07E90)
#define PGMIABHEJNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF07EC0)
#define PGMIABHEJNB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DF07ED0)

inline static constexpr unsigned int PGMIABHEJNB___c_TypeDefinitionIndex = 33149;

	class PGMIABHEJNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGMIABHEJNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB___C_CTOR_OFFSET))(this);
		}

		::PGMIABHEJNB* __cctor_b__38_0()
		{
			return ((::PGMIABHEJNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMIABHEJNB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
