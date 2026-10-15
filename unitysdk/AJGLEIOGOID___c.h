#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJGLEIOGOID;
namespace System { class Object; }

#define AJGLEIOGOID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E394C60)
#define AJGLEIOGOID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E394C90)
#define AJGLEIOGOID___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E394CA0)

inline static constexpr unsigned int AJGLEIOGOID___c_TypeDefinitionIndex = 34589;

	class AJGLEIOGOID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJGLEIOGOID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID___C_CTOR_OFFSET))(this);
		}

		::AJGLEIOGOID* __cctor_b__33_0()
		{
			return ((::AJGLEIOGOID*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGLEIOGOID___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
