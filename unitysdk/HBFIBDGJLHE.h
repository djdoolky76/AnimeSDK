#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HBFIBDGJLHE_APICCADOKMH;
class HBFIBDGJLHE_FKNIOEHAGAL;
class HBFIBDGJLHE_GIFMIOMFGNE;
class HBFIBDGJLHE_HBDKCJIBNMJ;
class HBFIBDGJLHE_NOIHNPGDCDL;
class HBFIBDGJLHE_OCJKOIKBNIN;
namespace RPG::Client::CityCarFlow { class MonoCityCarConfigure; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define HBFIBDGJLHE_ANIDFNDPDNK_OFFSET UNITYSDK_OFFSET(0x15BE0D70)
#define HBFIBDGJLHE_BABLIDHMPFP_1_OFFSET UNITYSDK_OFFSET(0x15BE21B0)
#define HBFIBDGJLHE_BABLIDHMPFP_OFFSET UNITYSDK_OFFSET(0x15BE2D50)
#define HBFIBDGJLHE_BIAFBNHBGFE_OFFSET UNITYSDK_OFFSET(0x15BE3060)
#define HBFIBDGJLHE_BJFHDBPNLJJ_OFFSET UNITYSDK_OFFSET(0x15BE55F0)
#define HBFIBDGJLHE_BLIFBCCOCBG_OFFSET UNITYSDK_OFFSET(0x15BEBED0)
#define HBFIBDGJLHE_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x15BEBD80)
#define HBFIBDGJLHE_BLNIGCOBDNP_OFFSET UNITYSDK_OFFSET(0x15BEC690)
#define HBFIBDGJLHE_CBFMBEJHCFJ_OFFSET UNITYSDK_OFFSET(0x15BE2640)
#define HBFIBDGJLHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BEC740)
#define HBFIBDGJLHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15BE5980)
#define HBFIBDGJLHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BE8C00)
#define HBFIBDGJLHE_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0x15BEA670)
#define HBFIBDGJLHE_FEIENNABFOA_OFFSET UNITYSDK_OFFSET(0x15BE2120)
#define HBFIBDGJLHE_GCHOAMECIBA_OFFSET UNITYSDK_OFFSET(0x15BE0CB0)
#define HBFIBDGJLHE_GDNLDLHEIHM_OFFSET UNITYSDK_OFFSET(0x15BEBDD0)
#define HBFIBDGJLHE_GET_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x15BE5940)
#define HBFIBDGJLHE_GET_ID_OFFSET UNITYSDK_OFFSET(0x15BE58D0)
#define HBFIBDGJLHE_GET_ISNIGHT_OFFSET UNITYSDK_OFFSET(0x15BEC5D0)
#define HBFIBDGJLHE_GET_ISROADRAGENPC_OFFSET UNITYSDK_OFFSET(0x15BEC610)
#define HBFIBDGJLHE_GET_ISROADRAGEPLAYER_OFFSET UNITYSDK_OFFSET(0x15BEC5F0)
#define HBFIBDGJLHE_GET_PLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x15BE5960)
#define HBFIBDGJLHE_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x15BE5920)
#define HBFIBDGJLHE_GET_WORLDUPAXIS_OFFSET UNITYSDK_OFFSET(0x15BE58E0)
#define HBFIBDGJLHE_GGFOEKLCHOJ_OFFSET UNITYSDK_OFFSET(0x15BEBE50)
#define HBFIBDGJLHE_GMKIKPGIEJK_OFFSET UNITYSDK_OFFSET(0x15BEC090)
#define HBFIBDGJLHE_HJHAFEGNPJO_OFFSET UNITYSDK_OFFSET(0x15BE2F20)
#define HBFIBDGJLHE_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15BEB730)
#define HBFIBDGJLHE_HNLELAKPHAE_OFFSET UNITYSDK_OFFSET(0x15BEB030)
#define HBFIBDGJLHE_IHCMMKDPLID_OFFSET UNITYSDK_OFFSET(0x15BE2510)
#define HBFIBDGJLHE_IMEBGKDJIAL_OFFSET UNITYSDK_OFFSET(0x15BE2B20)
#define HBFIBDGJLHE_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x15BE5CF0)
#define HBFIBDGJLHE_JHFFLEAEPHF_OFFSET UNITYSDK_OFFSET(0x15BE4060)
#define HBFIBDGJLHE_KCBGHAPFFBB_OFFSET UNITYSDK_OFFSET(0x15BE3100)
#define HBFIBDGJLHE_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0x15BEAE90)
#define HBFIBDGJLHE_LGNLJCPKECL_OFFSET UNITYSDK_OFFSET(0x15BEA9C0)
#define HBFIBDGJLHE_LHMCNGLPNGM_OFFSET UNITYSDK_OFFSET(0x15BEC6E0)
#define HBFIBDGJLHE_LLNHAINGPCJ_OFFSET UNITYSDK_OFFSET(0x15BEAA00)
#define HBFIBDGJLHE_LPLPAFEAOIN_OFFSET UNITYSDK_OFFSET(0x15BE2F90)
#define HBFIBDGJLHE_NOBJMPKFGDH_OFFSET UNITYSDK_OFFSET(0x15BEC630)
#define HBFIBDGJLHE_SET_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x15BE5950)
#define HBFIBDGJLHE_SET_ISNIGHT_OFFSET UNITYSDK_OFFSET(0x15BEC5E0)
#define HBFIBDGJLHE_SET_ISROADRAGENPC_OFFSET UNITYSDK_OFFSET(0x15BEC620)
#define HBFIBDGJLHE_SET_ISROADRAGEPLAYER_OFFSET UNITYSDK_OFFSET(0x15BEC600)
#define HBFIBDGJLHE_SET_PLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0x15BE5970)
#define HBFIBDGJLHE_SET_ROOT_OFFSET UNITYSDK_OFFSET(0x15BE5930)
#define HBFIBDGJLHE_SET_WORLDUPAXIS_OFFSET UNITYSDK_OFFSET(0x15BE5900)

inline static constexpr unsigned int HBFIBDGJLHE_TypeDefinitionIndex = 82169;

	class HBFIBDGJLHE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* MBCABACHAJJ; // 0x10
		::Il2CppArray<::System::Object*>* GEAGBDIBDII; // 0x18
		::Il2CppArray<::System::Object*>* JABKEGEILAO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* BDADMAPGNPN; // 0x28
		::UnityEngine::Transform* _Root_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* OCPDGLLFOGO; // 0x38
		::HBFIBDGJLHE_HBDKCJIBNMJ* ADEOAMEJDMD; // 0x40
		::HBFIBDGJLHE_FKNIOEHAGAL* GNJDEGMHLOC; // 0x48
		::RPG::Client::CityCarFlow::MonoCityCarConfigure* _Configure_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* LGEGKIKIPOB; // 0x58
		::Il2CppArray<::System::Object*>* CGAHLEOCICP; // 0x60
		::Il2CppArray<::System::Object*>* NAOFHDLACFK; // 0x68
		::System::UInt32 _ID_k__BackingField; // 0x70
		::System::Boolean _IsNight_k__BackingField; // 0x74
		::System::Boolean BAKGIAJOBLL; // 0x75
		::System::Boolean NDLHCENJFNJ; // 0x76
		::System::Boolean _IsRoadRagePlayer_k__BackingField; // 0x77
		::System::UInt32 GBCDFMKPEBB; // 0x78
		::System::Boolean MHEAIOMEGCA; // 0x7C
		::System::Boolean _IsRoadRageNPC_k__BackingField; // 0x7D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 _WorldUpAxis_k__BackingField; // 0x80
		::System::Nullable_1<::UnityEngine::Vector3> _PlayerPosition_k__BackingField; // 0x8C
		static ::System::Single* StaticGet_DLKDDCPBPGA()
		{
			return (::System::Single*)UnitySDK::FromName("", "HBFIBDGJLHE")->GetStaticField(0x159C0);
		}

		static ::System::Single* StaticGet_AMKDBBHEMNO()
		{
			return (::System::Single*)UnitySDK::FromName("", "HBFIBDGJLHE")->GetStaticField(0x159C4);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CCTOR_OFFSET))();
		}

		::System::Void GCHOAMECIBA(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GCHOAMECIBA_OFFSET))(this, a1, a2);
		}

		::System::Void ANIDFNDPDNK(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_ANIDFNDPDNK_OFFSET))(this, a1, a2);
		}

		::HBFIBDGJLHE_APICCADOKMH* IHCMMKDPLID(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::HBFIBDGJLHE_APICCADOKMH* a2)
		{
			return ((::HBFIBDGJLHE_APICCADOKMH*(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::HBFIBDGJLHE_APICCADOKMH*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_IHCMMKDPLID_OFFSET))(this, a1, a2);
		}

		::HBFIBDGJLHE_APICCADOKMH* JHFFLEAEPHF(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::HBFIBDGJLHE_APICCADOKMH* a2)
		{
			return ((::HBFIBDGJLHE_APICCADOKMH*(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::HBFIBDGJLHE_APICCADOKMH*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_JHFFLEAEPHF_OFFSET))(this, a1, a2);
		}

		::System::Void FEIENNABFOA(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_FEIENNABFOA_OFFSET))(this, a1, a2);
		}

		::System::Boolean CBFMBEJHCFJ(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::HBFIBDGJLHE_APICCADOKMH* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::HBFIBDGJLHE_APICCADOKMH*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CBFMBEJHCFJ_OFFSET))(this, a1, a2);
		}

		::System::Single LPLPAFEAOIN(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LPLPAFEAOIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KCBGHAPFFBB(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_KCBGHAPFFBB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BIAFBNHBGFE(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_BIAFBNHBGFE_OFFSET))(this, a1, a2, a3);
		}

		::System::Nullable_1<::System::Single> IMEBGKDJIAL(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_IMEBGKDJIAL_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_GIFMIOMFGNE* BJFHDBPNLJJ(::HBFIBDGJLHE_OCJKOIKBNIN* a1)
		{
			return ((::HBFIBDGJLHE_GIFMIOMFGNE*(*)(::PVOID, ::HBFIBDGJLHE_OCJKOIKBNIN*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_BJFHDBPNLJJ_OFFSET))(this, a1);
		}

		::System::Single BABLIDHMPFP(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::HBFIBDGJLHE_OCJKOIKBNIN* a2, ::HBFIBDGJLHE_GIFMIOMFGNE* a3)
		{
			return ((::System::Single(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::HBFIBDGJLHE_OCJKOIKBNIN*, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_BABLIDHMPFP_OFFSET))(this, a1, a2, a3);
		}

		::System::Single BABLIDHMPFP_1(::HBFIBDGJLHE_GIFMIOMFGNE* a1, ::HBFIBDGJLHE_GIFMIOMFGNE* a2)
		{
			return ((::System::Single(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_BABLIDHMPFP_1_OFFSET))(this, a1, a2);
		}

		::System::Single HJHAFEGNPJO(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Single(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HJHAFEGNPJO_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GET_ID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_WorldUpAxis()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GET_WORLDUPAXIS_OFFSET))(this);
		}

		::System::Void set_WorldUpAxis(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_SET_WORLDUPAXIS_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GET_ROOT_OFFSET))(this);
		}

		::System::Void set_Root(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_SET_ROOT_OFFSET))(this, a1);
		}

		::RPG::Client::CityCarFlow::MonoCityCarConfigure* get_Configure()
		{
			return ((::RPG::Client::CityCarFlow::MonoCityCarConfigure*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GET_CONFIGURE_OFFSET))(this);
		}

		::System::Void set_Configure(::RPG::Client::CityCarFlow::MonoCityCarConfigure* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_SET_CONFIGURE_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector3> get_PlayerPosition()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GET_PLAYERPOSITION_OFFSET))(this);
		}

		::System::Void set_PlayerPosition(::System::Nullable_1<::UnityEngine::Vector3> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_SET_PLAYERPOSITION_OFFSET))(this, a1);
		}

		::System::Void JDEKJLHMPLG(::RPG::Client::CityCarFlow::MonoCityCarConfigure* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_DISPOSE_OFFSET))(this);
		}

		::System::Void EHFLDBMLBPM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_EHFLDBMLBPM_OFFSET))(this, a1);
		}

		::System::Void KHNCMBEFIKI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_KHNCMBEFIKI_OFFSET))(this, a1);
		}

		::System::Void HKKFFCBJOKM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_NOIHNPGDCDL* GDNLDLHEIHM(::System::String* a1)
		{
			return ((::HBFIBDGJLHE_NOIHNPGDCDL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GDNLDLHEIHM_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_APICCADOKMH* GGFOEKLCHOJ(::System::String* a1)
		{
			return ((::HBFIBDGJLHE_APICCADOKMH*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GGFOEKLCHOJ_OFFSET))(this, a1);
		}

		::System::Boolean LGNLJCPKECL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LGNLJCPKECL_OFFSET))(this);
		}

		::System::Void BLIFBCCOCBG(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_BLIFBCCOCBG_OFFSET))(this, a1);
		}

		::System::Boolean GMKIKPGIEJK(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GMKIKPGIEJK_OFFSET))(this, a1);
		}

		::System::Boolean HNLELAKPHAE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_HNLELAKPHAE_OFFSET))(this, a1);
		}

		::System::Void LLNHAINGPCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LLNHAINGPCJ_OFFSET))(this);
		}

		::System::Boolean get_IsNight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GET_ISNIGHT_OFFSET))(this);
		}

		::System::Void set_IsNight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_SET_ISNIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRoadRagePlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GET_ISROADRAGEPLAYER_OFFSET))(this);
		}

		::System::Void set_IsRoadRagePlayer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_SET_ISROADRAGEPLAYER_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRoadRageNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_GET_ISROADRAGENPC_OFFSET))(this);
		}

		::System::Void set_IsRoadRageNPC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_SET_ISROADRAGENPC_OFFSET))(this, a1);
		}

		::System::Boolean NOBJMPKFGDH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_NOBJMPKFGDH_OFFSET))(this);
		}

		::System::Void BLNIGCOBDNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_BLNIGCOBDNP_OFFSET))(this, a1);
		}

		::System::Boolean LHMCNGLPNGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_LHMCNGLPNGM_OFFSET))(this);
		}

	};
