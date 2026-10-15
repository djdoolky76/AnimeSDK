#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFEMDCIJMFA;
namespace System { class Object; }

#define JFEMDCIJMFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7290E0)
#define JFEMDCIJMFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E729120)
#define JFEMDCIJMFA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E729130)

inline static constexpr unsigned int JFEMDCIJMFA___c_TypeDefinitionIndex = 32428;

	class JFEMDCIJMFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFEMDCIJMFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA___C_CTOR_OFFSET))(this);
		}

		::JFEMDCIJMFA* __cctor_b__38_0()
		{
			return ((::JFEMDCIJMFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFEMDCIJMFA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
