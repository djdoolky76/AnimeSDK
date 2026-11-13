#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOCBELPFLHO;
namespace System { class Object; }

#define GOCBELPFLHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE0C200)
#define GOCBELPFLHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE0C230)
#define GOCBELPFLHO___C___CCTOR_B__103_0_OFFSET UNITYSDK_OFFSET(0x1FE0C240)

inline static constexpr unsigned int GOCBELPFLHO___c_TypeDefinitionIndex = 36072;

	class GOCBELPFLHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOCBELPFLHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCBELPFLHO___C_CTOR_OFFSET))(this);
		}

		::GOCBELPFLHO* __cctor_b__103_0()
		{
			return ((::GOCBELPFLHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCBELPFLHO___C___CCTOR_B__103_0_OFFSET))(this);
		}

	};
