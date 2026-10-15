#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKPFBNADBFO;
namespace System { class Object; }

#define BKPFBNADBFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2F0F0)
#define BKPFBNADBFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2F120)
#define BKPFBNADBFO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF2F130)

inline static constexpr unsigned int BKPFBNADBFO___c_TypeDefinitionIndex = 30469;

	class BKPFBNADBFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKPFBNADBFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO___C_CTOR_OFFSET))(this);
		}

		::BKPFBNADBFO* __cctor_b__18_0()
		{
			return ((::BKPFBNADBFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPFBNADBFO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
