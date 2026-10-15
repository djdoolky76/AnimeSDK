#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKHLGPCDLGL;
namespace System { class Object; }

#define BKHLGPCDLGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF58DF0)
#define BKHLGPCDLGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF58E30)
#define BKHLGPCDLGL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF58E40)

inline static constexpr unsigned int BKHLGPCDLGL___c_TypeDefinitionIndex = 26195;

	class BKHLGPCDLGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKHLGPCDLGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHLGPCDLGL___C_CTOR_OFFSET))(this);
		}

		::BKHLGPCDLGL* __cctor_b__23_0()
		{
			return ((::BKHLGPCDLGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKHLGPCDLGL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
