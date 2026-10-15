#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMJOPNLILHK;
namespace System { class Object; }

#define HMJOPNLILHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A3650)
#define HMJOPNLILHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A3690)
#define HMJOPNLILHK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5A36A0)

inline static constexpr unsigned int HMJOPNLILHK___c_TypeDefinitionIndex = 31267;

	class HMJOPNLILHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMJOPNLILHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK___C_CTOR_OFFSET))(this);
		}

		::HMJOPNLILHK* __cctor_b__28_0()
		{
			return ((::HMJOPNLILHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJOPNLILHK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
