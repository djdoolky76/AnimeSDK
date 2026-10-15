#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCNKCCPMKLE;
namespace System { class Object; }

#define DCNKCCPMKLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14B320)
#define DCNKCCPMKLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14B360)
#define DCNKCCPMKLE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E14B370)

inline static constexpr unsigned int DCNKCCPMKLE___c_TypeDefinitionIndex = 30965;

	class DCNKCCPMKLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCNKCCPMKLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE___C_CTOR_OFFSET))(this);
		}

		::DCNKCCPMKLE* __cctor_b__33_0()
		{
			return ((::DCNKCCPMKLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
