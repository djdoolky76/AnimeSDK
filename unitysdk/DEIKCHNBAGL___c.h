#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEIKCHNBAGL;
namespace System { class Object; }

#define DEIKCHNBAGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E195470)
#define DEIKCHNBAGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1954B0)
#define DEIKCHNBAGL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1954C0)

inline static constexpr unsigned int DEIKCHNBAGL___c_TypeDefinitionIndex = 26331;

	class DEIKCHNBAGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEIKCHNBAGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKCHNBAGL___C_CTOR_OFFSET))(this);
		}

		::DEIKCHNBAGL* __cctor_b__23_0()
		{
			return ((::DEIKCHNBAGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKCHNBAGL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
