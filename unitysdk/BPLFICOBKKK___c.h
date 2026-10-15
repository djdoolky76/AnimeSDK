#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPLFICOBKKK;
namespace System { class Object; }

#define BPLFICOBKKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01F680)
#define BPLFICOBKKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01F6C0)
#define BPLFICOBKKK___C___CCTOR_B__51_0_OFFSET UNITYSDK_OFFSET(0x1E01F6D0)

inline static constexpr unsigned int BPLFICOBKKK___c_TypeDefinitionIndex = 28907;

	class BPLFICOBKKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPLFICOBKKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLFICOBKKK___C_CTOR_OFFSET))(this);
		}

		::BPLFICOBKKK* __cctor_b__51_0()
		{
			return ((::BPLFICOBKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLFICOBKKK___C___CCTOR_B__51_0_OFFSET))(this);
		}

	};
