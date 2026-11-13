#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFCKBFLDHNI;
namespace System { class Object; }

#define PFCKBFLDHNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20676850)
#define PFCKBFLDHNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20676890)
#define PFCKBFLDHNI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x206768A0)

inline static constexpr unsigned int PFCKBFLDHNI___c_TypeDefinitionIndex = 33467;

	class PFCKBFLDHNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x351B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFCKBFLDHNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI___C_CTOR_OFFSET))(this);
		}

		::PFCKBFLDHNI* __cctor_b__43_0()
		{
			return ((::PFCKBFLDHNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFCKBFLDHNI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
