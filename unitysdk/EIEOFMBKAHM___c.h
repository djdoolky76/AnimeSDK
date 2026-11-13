#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIEOFMBKAHM;
namespace System { class Object; }

#define EIEOFMBKAHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF91500)
#define EIEOFMBKAHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF91530)
#define EIEOFMBKAHM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FF91540)

inline static constexpr unsigned int EIEOFMBKAHM___c_TypeDefinitionIndex = 28455;

	class EIEOFMBKAHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DE20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIEOFMBKAHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFMBKAHM___C_CTOR_OFFSET))(this);
		}

		::EIEOFMBKAHM* __cctor_b__18_0()
		{
			return ((::EIEOFMBKAHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEOFMBKAHM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
