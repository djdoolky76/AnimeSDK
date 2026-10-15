#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFAAFFDPBIL;
namespace System { class Object; }

#define HFAAFFDPBIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E532920)
#define HFAAFFDPBIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E532960)
#define HFAAFFDPBIL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E532970)

inline static constexpr unsigned int HFAAFFDPBIL___c_TypeDefinitionIndex = 25792;

	class HFAAFFDPBIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFAAFFDPBIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFAAFFDPBIL___C_CTOR_OFFSET))(this);
		}

		::HFAAFFDPBIL* __cctor_b__33_0()
		{
			return ((::HFAAFFDPBIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFAAFFDPBIL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
