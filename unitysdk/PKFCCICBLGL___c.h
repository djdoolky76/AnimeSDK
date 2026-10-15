#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKFCCICBLGL;
namespace System { class Object; }

#define PKFCCICBLGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF89CA0)
#define PKFCCICBLGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF89CD0)
#define PKFCCICBLGL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF89CE0)

inline static constexpr unsigned int PKFCCICBLGL___c_TypeDefinitionIndex = 28846;

	class PKFCCICBLGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x488A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKFCCICBLGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFCCICBLGL___C_CTOR_OFFSET))(this);
		}

		::PKFCCICBLGL* __cctor_b__23_0()
		{
			return ((::PKFCCICBLGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFCCICBLGL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
