#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNNGLBEGIKB;
namespace System { class Object; }

#define GNNGLBEGIKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B9FE0)
#define GNNGLBEGIKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BA020)
#define GNNGLBEGIKB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4BA030)

inline static constexpr unsigned int GNNGLBEGIKB___c_TypeDefinitionIndex = 31176;

	class GNNGLBEGIKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNNGLBEGIKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB___C_CTOR_OFFSET))(this);
		}

		::GNNGLBEGIKB* __cctor_b__33_0()
		{
			return ((::GNNGLBEGIKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
