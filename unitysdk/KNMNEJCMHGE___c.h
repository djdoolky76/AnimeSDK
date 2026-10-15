#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNMNEJCMHGE;
namespace System { class Object; }

#define KNMNEJCMHGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8310)
#define KNMNEJCMHGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8340)
#define KNMNEJCMHGE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8A8350)

inline static constexpr unsigned int KNMNEJCMHGE___c_TypeDefinitionIndex = 33268;

	class KNMNEJCMHGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNMNEJCMHGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE___C_CTOR_OFFSET))(this);
		}

		::KNMNEJCMHGE* __cctor_b__28_0()
		{
			return ((::KNMNEJCMHGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMNEJCMHGE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
