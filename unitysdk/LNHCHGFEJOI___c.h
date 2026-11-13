#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNHCHGFEJOI;
namespace System { class Object; }

#define LNHCHGFEJOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200CB540)
#define LNHCHGFEJOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200CB570)
#define LNHCHGFEJOI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x200CB580)

inline static constexpr unsigned int LNHCHGFEJOI___c_TypeDefinitionIndex = 31662;

	class LNHCHGFEJOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNHCHGFEJOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI___C_CTOR_OFFSET))(this);
		}

		::LNHCHGFEJOI* __cctor_b__43_0()
		{
			return ((::LNHCHGFEJOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHCHGFEJOI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
