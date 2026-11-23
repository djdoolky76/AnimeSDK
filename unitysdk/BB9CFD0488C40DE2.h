#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BB9CFD0488C40DE2_A14C8E9B9AEBA698_1_OFFSET UNITYSDK_OFFSET(0x2A7D550)
#define BB9CFD0488C40DE2_A14C8E9B9AEBA698_OFFSET UNITYSDK_OFFSET(0x2A7D4A0)
#define BB9CFD0488C40DE2_A2FE29BA57DB9B66_OFFSET UNITYSDK_OFFSET(0x2A7D730)
#define BB9CFD0488C40DE2_A66643E4AA97649D_OFFSET UNITYSDK_OFFSET(0x2A7D860)
#define BB9CFD0488C40DE2_AEF99E8FFEA2BA31_OFFSET UNITYSDK_OFFSET(0x2A7D0F0)
#define BB9CFD0488C40DE2_E6426EAF65A0D993_OFFSET UNITYSDK_OFFSET(0x2A7D6A0)
#define BB9CFD0488C40DE2_E84A8A00D89AFAA6_OFFSET UNITYSDK_OFFSET(0x2A7D130)
#define BB9CFD0488C40DE2_EE827505CF67210F_OFFSET UNITYSDK_OFFSET(0x2A7D640)
#define BB9CFD0488C40DE2_FCD852BF21DF999F_OFFSET UNITYSDK_OFFSET(0x2A7D0C0)

inline static constexpr unsigned int BB9CFD0488C40DE2_TypeDefinitionIndex = 18409;

class BB9CFD0488C40DE2 : public ::System::Object
{
public:
	static ::System::Single A14C8E9B9AEBA698(::UnityEngine::Vector2 B5459FABA90E20BD, ::UnityEngine::Vector2 E9AB52E4BE8F4E66, ::UnityEngine::Vector2 B0E5ED69844DFC0B)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BB9CFD0488C40DE2_A14C8E9B9AEBA698_OFFSET))(B5459FABA90E20BD, E9AB52E4BE8F4E66, B0E5ED69844DFC0B);
	}

	static ::System::Single A14C8E9B9AEBA698_1(::UnityEngine::Vector3 B5459FABA90E20BD, ::UnityEngine::Vector3 E9AB52E4BE8F4E66, ::UnityEngine::Vector3 B0E5ED69844DFC0B)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BB9CFD0488C40DE2_A14C8E9B9AEBA698_1_OFFSET))(B5459FABA90E20BD, E9AB52E4BE8F4E66, B0E5ED69844DFC0B);
	}

	static ::System::Boolean EE827505CF67210F(::UnityEngine::Vector2 F5006C45C2B93A1C)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BB9CFD0488C40DE2_EE827505CF67210F_OFFSET))(F5006C45C2B93A1C);
	}

	static ::System::Single A66643E4AA97649D(::UnityEngine::Vector3 F761046FE19623C7, ::UnityEngine::Vector3 ABAEB18D11EC1409, ::UnityEngine::Vector3 BE38C169EB1E684C)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BB9CFD0488C40DE2_A66643E4AA97649D_OFFSET))(F761046FE19623C7, ABAEB18D11EC1409, BE38C169EB1E684C);
	}

	static ::UnityEngine::Vector3 E6426EAF65A0D993(::UnityEngine::Vector3 EAB6A87D088A15E7, ::UnityEngine::Vector3 EFBF4FB911DE0AFD)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BB9CFD0488C40DE2_E6426EAF65A0D993_OFFSET))(EAB6A87D088A15E7, EFBF4FB911DE0AFD);
	}

	static ::UnityEngine::Vector2 FCD852BF21DF999F(::UnityEngine::Vector2 F5006C45C2B93A1C)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BB9CFD0488C40DE2_FCD852BF21DF999F_OFFSET))(F5006C45C2B93A1C);
	}

	static ::System::Boolean AEF99E8FFEA2BA31(::UnityEngine::Vector3 F5006C45C2B93A1C)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BB9CFD0488C40DE2_AEF99E8FFEA2BA31_OFFSET))(F5006C45C2B93A1C);
	}

	static ::UnityEngine::Quaternion A2FE29BA57DB9B66(::UnityEngine::Vector3 F761046FE19623C7, ::UnityEngine::Vector3 ABAEB18D11EC1409, ::UnityEngine::Vector3 BE38C169EB1E684C)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BB9CFD0488C40DE2_A2FE29BA57DB9B66_OFFSET))(F761046FE19623C7, ABAEB18D11EC1409, BE38C169EB1E684C);
	}

	static ::System::Single E84A8A00D89AFAA6(::UnityEngine::Vector3 F761046FE19623C7, ::UnityEngine::Vector3 ABAEB18D11EC1409)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BB9CFD0488C40DE2_E84A8A00D89AFAA6_OFFSET))(F761046FE19623C7, ABAEB18D11EC1409);
	}
};
